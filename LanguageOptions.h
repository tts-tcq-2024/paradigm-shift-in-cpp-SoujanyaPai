#ifndef LANGUAGEOPTIONS_H
#define LANGUAGEOPTIONS_H

enum class Language {
    ENGLISH,
    GERMAN
};

class LanguageSelector {
public:
    void setLanguage(Language lang) { 
    currentLanguage = lang; 
    }
    Language getLanguage() const { 
      return currentLanguage; 
    }
private:
    Language currentLanguage;
};

#endif // LANGUAGEOPTIONS_H
