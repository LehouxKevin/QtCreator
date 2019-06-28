#ifndef AUDIOINFO_H
#define AUDIOINFO_H

#include <QObject>
#include <QIODevice>
#include <QAudioFormat>

class AudioInfo : public QIODevice
{
    Q_OBJECT
public:
    AudioInfo();
    AudioInfo(const QAudioFormat &format);
    void start();
    void stop();
    qint64 readData(char *data, qint64 maxlen) ;
    qint64 writeData(const char *data, qint64 len) ;
    qreal level() const { return m_level; }
private:
    const QAudioFormat m_format;
    quint32 m_maxAmplitude ;
    qreal m_level ; // 0.0 <= m_level <= 1.0

signals:
    void update();

};

#endif // AUDIOINFO_H
