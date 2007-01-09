
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_SSLSocket__
#define __gnu_javax_net_ssl_provider_SSLSocket__

#pragma interface

#include <javax/net/ssl/SSLSocket.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace hash
        {
            class IMessageDigest;
        }
        namespace sig
        {
            class ISignature;
        }
      }
    }
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
            class SRPTrustManager;
          namespace provider
          {
              class Alert;
              class CipherSuite;
              class Finished;
              class ProtocolVersion;
              class RecordInput;
              class SSLSocket;
              class Session;
              class SessionContext;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace math
    {
        class BigInteger;
    }
    namespace net
    {
        class InetAddress;
        class Socket;
        class SocketAddress;
    }
    namespace nio
    {
      namespace channels
      {
          class SocketChannel;
      }
    }
    namespace security
    {
        class SecureRandom;
      namespace cert
      {
          class X509Certificate;
      }
    }
  }
  namespace javax
  {
    namespace net
    {
      namespace ssl
      {
          class HandshakeCompletedListener;
          class SSLSession;
          class X509KeyManager;
          class X509TrustManager;
      }
    }
  }
}

class gnu::javax::net::ssl::provider::SSLSocket : public ::javax::net::ssl::SSLSocket
{

public: // actually package-private
  SSLSocket(::java::net::Socket *, ::java::lang::String *, jint, jboolean);
  SSLSocket(::java::net::Socket *, ::java::nio::channels::SocketChannel *);
  SSLSocket();
  SSLSocket(::java::net::InetAddress *, jint);
  SSLSocket(::java::net::InetAddress *, jint, ::java::net::InetAddress *, jint);
  SSLSocket(::java::lang::String *, jint);
  SSLSocket(::java::lang::String *, jint, ::java::net::InetAddress *, jint);
private:
  void initialize();
public:
  void addHandshakeCompletedListener(::javax::net::ssl::HandshakeCompletedListener *);
  void removeHandshakeCompletedListener(::javax::net::ssl::HandshakeCompletedListener *);
  JArray< ::java::lang::String * > * getEnabledProtocols();
  void setEnabledProtocols(JArray< ::java::lang::String * > *);
  JArray< ::java::lang::String * > * getSupportedProtocols();
  JArray< ::java::lang::String * > * getEnabledCipherSuites();
  void setEnabledCipherSuites(JArray< ::java::lang::String * > *);
  JArray< ::java::lang::String * > * getSupportedCipherSuites();
  ::javax::net::ssl::SSLSession * getSession();
  jboolean getEnableSessionCreation();
  void setEnableSessionCreation(jboolean);
  jboolean getNeedClientAuth();
  void setNeedClientAuth(jboolean);
  jboolean getWantClientAuth();
  void setWantClientAuth(jboolean);
  jboolean getUseClientMode();
  void setUseClientMode(jboolean);
  void startHandshake();
  ::java::net::InetAddress * getInetAddress();
  ::java::net::InetAddress * getLocalAddress();
  jint getPort();
  jint getLocalPort();
  ::java::io::InputStream * getInputStream();
  ::java::io::OutputStream * getOutputStream();
  void setTcpNoDelay(jboolean);
  jboolean getTcpNoDelay();
  void setSoLinger(jboolean, jint);
  jint getSoLinger();
  void sendUrgentData(jint);
  void setSoTimeout(jint);
  jint getSoTimeout();
  void setSendBufferSize(jint);
  jint getSendBufferSize();
  void setReceiveBufferSize(jint);
  jint getReceiveBufferSize();
  void close();
  ::java::lang::String * toString();
  void connect(::java::net::SocketAddress *);
  void connect(::java::net::SocketAddress *, jint);
  void bind(::java::net::SocketAddress *);
  ::java::net::SocketAddress * getLocalSocketAddress();
  ::java::nio::channels::SocketChannel * getChannel();
  jboolean isBound();
  jboolean isClosed();
  void setOOBInline(jboolean);
  jboolean getOOBInline();
  void setKeepAlive(jboolean);
  jboolean getKeepAlive();
  void setTrafficClass(jint);
  jint getTrafficClass();
  void setReuseAddress(jboolean);
  jboolean getReuseAddress();
  void shutdownInput();
  void shutdownOutput();
  jboolean isConnected();
  jboolean isInputShutdown();
  jboolean isOutputShutdown();
public: // actually protected
  void finalize();
public: // actually package-private
  void setSessionContext(::gnu::javax::net::ssl::provider::SessionContext *);
  void setEnabledCipherSuites(::java::util::List *);
  void setEnabledProtocols(::java::util::SortedSet *);
  void setSRPTrustManager(::gnu::javax::net::ssl::SRPTrustManager *);
  void setTrustManager(::javax::net::ssl::X509TrustManager *);
  void setKeyManager(::javax::net::ssl::X509KeyManager *);
  void setRandom(::java::security::SecureRandom *);
  void sendAlert(::gnu::javax::net::ssl::provider::Alert *);
  ::gnu::javax::net::ssl::provider::Alert * checkAlert();
  void checkHandshakeDone();
private:
  void changeCipherSpec();
  void readChangeCipherSpec();
  void setupIO();
  void handshakeCompleted();
  void doClientHandshake();
  void doServerHandshake();
  JArray< JArray< jbyte > * > * generateKeys(JArray< jbyte > *, JArray< jbyte > *, ::gnu::javax::net::ssl::provider::ProtocolVersion *);
  ::gnu::javax::net::ssl::provider::Finished * generateFinished(::gnu::javax::net::ssl::provider::ProtocolVersion *, ::gnu::java::security::hash::IMessageDigest *, ::gnu::java::security::hash::IMessageDigest *, jboolean);
  ::gnu::javax::net::ssl::provider::Alert * unexpectedMessage();
  void throwUnexpectedMessage();
  ::gnu::javax::net::ssl::provider::Alert * handshakeFailure();
  void throwHandshakeFailure();
  ::gnu::javax::net::ssl::provider::Alert * internalError();
  void throwInternalError();
  ::gnu::javax::net::ssl::provider::Alert * peerUnverified(JArray< ::java::security::cert::X509Certificate * > *);
  void throwPeerUnverified(JArray< ::java::security::cert::X509Certificate * > *);
  ::gnu::javax::net::ssl::provider::CipherSuite * selectSuite(::java::util::List *, ::gnu::javax::net::ssl::provider::ProtocolVersion *);
  ::java::lang::String * askUserName(::java::lang::String *);
  ::java::lang::String * askPassword(::java::lang::String *);
  jboolean checkCertificates(JArray< ::java::security::cert::X509Certificate * > *);
  void updateSig(::gnu::java::security::sig::ISignature *, ::java::math::BigInteger *);
  void fatal();
  static const jboolean DEBUG_HANDSHAKE_LAYER = 1;
  static const jboolean DEBUG_KEY_EXCHANGE = 0;
  static ::java::util::logging::Logger * logger;
  ::java::net::Socket * __attribute__((aligned(__alignof__( ::javax::net::ssl::SSLSocket)))) underlyingSocket;
  jint underlyingPort;
  jboolean autoClose;
public: // actually package-private
  ::gnu::javax::net::ssl::provider::SessionContext * sessionContext;
  ::gnu::javax::net::ssl::provider::Session * session;
  ::java::util::LinkedList * handshakeListeners;
private:
  jboolean clientMode;
  jboolean wantClientAuth;
  jboolean needClientAuth;
  jboolean createSessions;
  jboolean handshakeDone;
  ::java::lang::String * remoteHost;
  ::java::io::InputStream * socketIn;
  ::java::io::OutputStream * socketOut;
  ::java::io::InputStream * applicationIn;
  ::java::io::OutputStream * applicationOut;
  ::java::io::InputStream * handshakeIn;
  ::java::io::OutputStream * handshakeOut;
public: // actually package-private
  ::gnu::javax::net::ssl::provider::RecordInput * recordInput;
private:
  jlong handshakeTime;
  ::java::nio::channels::SocketChannel * channel;
public: // actually package-private
  static ::java::util::SortedSet * supportedProtocols;
  static ::java::util::List * supportedSuites;
private:
  static JArray< jbyte > * SENDER_CLIENT;
  static JArray< jbyte > * SENDER_SERVER;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_SSLSocket__
