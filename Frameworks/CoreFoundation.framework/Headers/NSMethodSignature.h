/* Runtime dump - NSMethodSignature
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMethodSignature : NSObject
{
    void * _private;
    id _reserved;
}

@property (readonly) unsigned int numberOfArguments;
@property (readonly) unsigned int frameLength;
@property (readonly) char * methodReturnType;
@property (readonly) unsigned int methodReturnLength;

+ (NSArray *)signatureWithObjCTypes:(char *)arg0;

- (char)_gkHasReplyBlock;
- (char)_gkTakesBlockAtIndex:(unsigned int)arg0;
- (char)_cheapTypeString:(char *)arg0 maxLength:(long)arg1;
- (struct ? *)_frameDescriptor;
- (struct NSMethodFrameArgInfo *)_argInfo:(unsigned int)arg0;
- (NSString *)_typeString;
- (NSObject *)_signatureForBlockAtArgumentIndex:(int)arg0;
- (Class)_classForObjectAtArgumentIndex:(int)arg0;
- (NSObject *)_protocolsForObjectAtArgumentIndex:(int)arg0;
- (char)isOneway;
- (char)_isHiddenStructRet;
- (void)dealloc;
- (NSMethodSignature *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)debugDescription;
- (unsigned int)numberOfArguments;
- (char *)getArgumentTypeAtIndex:(SEL)arg0;
- (unsigned int)methodReturnLength;
- (char *)methodReturnType;
- (unsigned int)frameLength;
- (void)finalize;

@end
