#include <iostream>
#include <string>

// Classe que representa o originator
class TextEditor
{
private:
    std::string m_text;

public:
    TextEditor(const std::string &text) : m_text(text) {}

    // Cria um memento com o estado atual do texto
    std::shared_ptr<Memento> createMemento()
    {
        return std::make_shared<Memento>(m_text);
    }

    // Restaura o estado do texto a partir do memento
    void restore(const std::shared_ptr<Memento> &memento)
    {
        m_text = memento->getText();
    }

    // Adiciona texto ao final do texto existente
    void addText(const std::string &text)
    {
        m_text += text;
    }

    // Obtém o texto atual
    std::string getText() const
    {
        return m_text;
    }
};

// Classe que representa o memento
class Memento
{
private:
    std::string m_text;

public:
    Memento(const std::string &text) : m_text(text) {}

    // Obtém o texto armazenado no memento
    std::string getText() const
    {
        return m_text;
    }
};

// Classe que representa o caretaker
class TextEditorCaretaker
{
private:
    std::vector<std::shared_ptr<Memento>> m_mementos;

public:
    // Armazena um memento
    void addMemento(const std::shared_ptr<Memento> &memento)
    {
        m_mementos.push_back(memento);
    }

    //
