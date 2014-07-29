#ifndef SHORTCUTSDIALOG_H
#define SHORTCUTSDIALOG_H

#include <QDialog>
#include <QTableWidget>
#include "ShortcutEdit.h"
#include "Configuration.h"

namespace Ui {
class ShortcutsDialog;
}

class ShortcutsDialog : public QDialog
{
    Q_OBJECT
    QTableWidget* tbl;
    ShortcutEdit *shortcutfield;
    XH::Shortcut currentShortcut;
    int currentRow;
    bool editLock;
public:
    explicit ShortcutsDialog(QWidget *parent = 0);
    ~ShortcutsDialog();
signals:


protected slots:
    void syncTextfield();
    void updateShortcut();
private:
    Ui::ShortcutsDialog *ui;
};

#endif // SHORTCUTSDIALOG_H
