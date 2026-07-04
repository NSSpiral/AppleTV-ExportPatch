/* Runtime dump - XPCDetailedSignature
 * Image: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

@interface XPCDetailedSignature : NSObject
{
    unsigned int _argumentCount;
    Class * _classes;
}

+ (NSNumber *)signatureWithArgumentCount:(unsigned int)arg0 classes:(Class)arg1;
+ (NSArray *)signatureWithoutArguments;

- (void)dealloc;
- (Class)argumentClassAtIndex:(unsigned int)arg0;
- (XPCDetailedSignature *)initWithArgumentCount:(unsigned int)arg0;
- (void)setClass:(Class)arg0 forArgumentAtIndex:(unsigned int)arg1;

@end
