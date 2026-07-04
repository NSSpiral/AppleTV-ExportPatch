/* Runtime dump - NSXPCInterface
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCInterface : NSObject
{
    Protocol * _protocol;
    struct __CFDictionary * _methods2;
    id _reserved1;
}

@property Protocol * protocol;

+ (NSXPCInterface *)mf_mailComposeRemoteServiceInterface;
+ (NSXPCInterface *)mf_mailComposeRemoteHostInterface;
+ (NSXPCInterface *)hm_userManagementRemoteServiceInterface;
+ (NSXPCInterface *)hm_userManagementRemoteHostInterface;
+ (NSXPCInterface *)hm_setupRemoteServiceInterface;
+ (NSXPCInterface *)hm_setupRemoteHostInterface;
+ (NSXPCInterface *)af_siriTaskDeliveringInterface;
+ (NSXPCInterface *)signatureForBlock:(id /* block */)arg0;
+ (NSObject *)interfaceWithProtocol:(Protocol *)arg0;

- (NSString *)classesForSelector:(SEL)arg0 argumentIndex:(unsigned int)arg1 ofReply:(char)arg2;
- (NSString *)_verifiedMethodSignatureForReplyBlockOfSelector:(SEL)arg0;
- (id)_interfaceForArgument:(unsigned int)arg0 ofSelector:(SEL)arg1 reply:(char)arg2;
- (NSString *)_allowedClassesForSelector:(SEL)arg0 reply:(char)arg1;
- (NSString *)_verifiedMethodSignatureForSelector:(SEL)arg0;
- (NSString *)interfaceForSelector:(SEL)arg0 argumentIndex:(unsigned int)arg1 ofReply:(char)arg2;
- (void)setClass:(Class)arg0 forSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(char)arg3;
- (Class)classForSelector:(SEL)arg0 argumentIndex:(unsigned int)arg1 ofReply:(char)arg2;
- (void)setReplyBlockSignature:(NSObject *)arg0 forSelector:(SEL)arg1;
- (NSString *)replyBlockSignatureForSelector:(SEL)arg0;
- (void)dealloc;
- (NSXPCInterface *)init;
- (NSString *)debugDescription;
- (void)setClasses:(Class *)arg0 forSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(char)arg3;
- (void)setInterface:(NSXPCInterface *)arg0 forSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(char)arg3;
- (Protocol *)protocol;
- (void)setProtocol:(Protocol *)arg0;
- (void)finalize;

@end
