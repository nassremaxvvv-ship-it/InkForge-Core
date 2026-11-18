
// SPDX-License-Identifier: GPL-3.0-or-later

#include "desktop/chat/chatbox.h"

#include <QResizeEvent>

namespace widgets {

ChatBox::ChatBox(Document *doc, bool smallScreenMode, QWidget *parent)
    : QWidget(parent)
{
    Q_UNUSED(doc);
    Q_UNUSED(smallScreenMode);

    m_chatWidget = nullptr;
    m_userItemDelegate = nullptr;
    m_inviteButton = nullptr;
    m_sessionSettingsButton = nullptr;
    m_chatMenuButton = nullptr;
    m_userList = nullptr;

    hide();
}

void ChatBox::setActions(QAction *inviteAction, QAction *sessionSettingsAction)
{
    Q_UNUSED(inviteAction);
    Q_UNUSED(sessionSettingsAction);
}

void ChatBox::setSmallScreenMode(bool smallScreenMode)
{
    Q_UNUSED(smallScreenMode);
    hide();
}

void ChatBox::focusInput()
{
}

void ChatBox::receiveSystemMessage(const QString &message, int type)
{
    Q_UNUSED(message);
    Q_UNUSED(type);
}

void ChatBox::setCurrentLayer(int layerId)
{
    Q_UNUSED(layerId);
}

void ChatBox::onCanvasChanged(canvas::CanvasModel *canvas)
{
    Q_UNUSED(canvas);
}

void ChatBox::onServerLogin()
{
}

void ChatBox::detachFromParent(int mode)
{
    Q_UNUSED(mode);
}

void ChatBox::reattachToParent()
{
}

void ChatBox::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
}

}
