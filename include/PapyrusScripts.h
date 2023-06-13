#pragma once

namespace Mus {
    namespace Papyrus {
        constexpr std::string_view ScriptFileName = "MuFacialExpressionExtended";
        void PrintConsole(RE::StaticFunctionTag*, RE::BSFixedString strArg);
        std::uint32_t GetVersion(RE::StaticFunctionTag*);

        bool RegisterNewMorphData(RE::StaticFunctionTag*, RE::BSFixedString a_morphBasePath, RE::BSFixedString a_morphPath);
        bool RegisterNewMorphNameOnType(RE::StaticFunctionTag*, RE::BSFixedString a_morphCategory, RE::BSFixedString a_morphName);
        bool RegisterNewMorphName(RE::StaticFunctionTag*, RE::BSFixedString a_morphName);

        std::vector<std::string> GetExpressionCategories(RE::StaticFunctionTag*);
        std::size_t GetExpressionCategoriesSize(RE::StaticFunctionTag*);
        std::string GetExpressionCategoryByNumber(RE::StaticFunctionTag*, std::int32_t a_categoryNumber);
        std::string GetExpressionCategoryByMorphName(RE::StaticFunctionTag*, RE::BSFixedString a_morphName);
        std::int32_t GetExpressionCategoryNumber(RE::StaticFunctionTag*, RE::BSFixedString a_morphCategory);
        bool IsValidExpressionCategory(RE::StaticFunctionTag*, RE::BSFixedString a_morphCategory);

        std::vector<std::string> GetExpressionMorphNames(RE::StaticFunctionTag*, RE::BSFixedString a_morphCategory);
        std::size_t GetExpressionMorphNamesSize(RE::StaticFunctionTag*, RE::BSFixedString a_morphCategory);
        std::vector<std::string> GetExpressionMorphNamesByNumber(RE::StaticFunctionTag*, std::int32_t a_categoryNumber);
        std::string GetExpressionMorphNameByNumber(RE::StaticFunctionTag*, RE::BSFixedString a_morphCategory, std::int32_t a_morphNumber);
        std::string GetExpressionMorphNameByNumbers(RE::StaticFunctionTag*, std::int32_t a_categoryNumber, std::int32_t a_morphNumber);
        std::int32_t GetExpressionMorphNameNumber(RE::StaticFunctionTag*, RE::BSFixedString a_morphName);
        bool IsValidExpressionMorphName(RE::StaticFunctionTag*, RE::BSFixedString a_morphName);

        float GetExpressionValueByName(RE::StaticFunctionTag*, RE::Actor* a_actor, RE::BSFixedString a_morphName);
        float GetExpressionValueByNumber(RE::StaticFunctionTag*, RE::Actor* a_actor, std::uint32_t a_categoryNumber, std::uint32_t a_morphNumber);

        void SetExpressionByName(RE::StaticFunctionTag*, RE::Actor* a_actor, RE::BSFixedString a_morphName, float a_value);
        void SetExpressionByType(RE::StaticFunctionTag*, RE::Actor* a_actor, RE::BSFixedString a_morphCategory, std::uint32_t a_morphNumber, float a_value);
        void SetExpressionByNumber(RE::StaticFunctionTag*, RE::Actor* a_actor, std::uint32_t a_morphCategory, std::uint32_t a_morphNumber, float a_value);
        void RevertExpression(RE::StaticFunctionTag*, RE::Actor* a_actor, RE::BSFixedString a_morphCategory);
        void UpdateExpression(RE::StaticFunctionTag*, RE::Actor* a_actor, RE::BSFixedString a_morphCategory);

        bool RegisterPapyrusFunctions(RE::BSScript::IVirtualMachine* vm);
    }
}
