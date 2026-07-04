/* Runtime dump - SCROCallback
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROCallback : NSObject <NSCoding>
{
    int _key;
    id _object;
    char _isAtomic;
}

- (void)dealloc;
- (SCROCallback *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (int)key;
- (NSObject *)object;
- (SCROCallback *)initWithKey:(int)arg0 object:(NSObject *)arg1;
- (void)setIsAtomic:(char)arg0;
- (char)isAtomic;
- (void)postToHandler:(id /* block */)arg0;

@end
