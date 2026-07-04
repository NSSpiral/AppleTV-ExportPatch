/* Runtime dump - SCRCArgumentHolder
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCArgumentHolder : NSObject
{
    SCRCArgumentHolderPrivate * _private;
}

- (char)isRequired;
- (AVMediaSelectionOption *)option;
- (void)dealloc;
- (SCRCArgumentHolder *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (int)compare:(NSObject *)arg0;
- (void)setTarget:(NSObject *)arg0;
- (SEL)action;
- (NSObject *)target;
- (void)setAction:(SEL)arg0;
- (char)process;
- (void *)argument;
- (NSString *)argumentDescription;
- (void)setOption:(AVMediaSelectionOption *)arg0;
- (void)setArgument:(void *)arg0;
- (void)setArgumentDescription:(NSString *)arg0;
- (void)setIsRequired:(char)arg0;

@end
