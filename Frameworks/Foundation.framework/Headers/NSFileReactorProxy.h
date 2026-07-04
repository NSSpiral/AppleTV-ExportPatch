/* Runtime dump - NSFileReactorProxy
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileReactorProxy : NSObject
{
    NSObject<OS_xpc_object> * _client;
    id _reactorID;
    id _messageSender;
    NSFileAccessNode * _itemLocation;
}

- (NSFileAccessNode *)itemLocation;
- (void)setItemLocation:(NSFileAccessNode *)arg0;
- (NSObject *)reactorID;
- (NSObject *)messageSender;
- (NSFileReactorProxy *)initWithClient:(NSObject<OS_xpc_object> *)arg0 reactorID:(NSObject *)arg1 messageSender:(NSObject *)arg2;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)arg0;
- (NSString *)descriptionWithIndenting:(id)arg0;
- (void)forwardUsingMessageSender:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSObject<OS_xpc_object> *)client;
- (void)finalize;

@end
