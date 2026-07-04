/* Runtime dump - WKConnection
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKConnection : NSObject <WKObject>
{
    struct WeakObjCPtr<id<WKConnectionDelegate> > _delegate;
}

@property <WKConnectionDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

- (void)dealloc;
- (void)setDelegate:(<WKConnectionDelegate> *)arg0;
- (<WKConnectionDelegate> *)delegate;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct WebConnection *)_connection;
- (struct Object *)_apiObject;
- (void)sendMessageWithName:(NSString *)arg0 body:(id /* block */)arg1;

@end
