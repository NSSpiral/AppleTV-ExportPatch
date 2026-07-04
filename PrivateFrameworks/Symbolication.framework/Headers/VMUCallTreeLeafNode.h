/* Runtime dump - VMUCallTreeLeafNode
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUCallTreeLeafNode : VMUCallTreeNode
{
    NSCountedSet * _addresses;
    NSString * _combinedName;
}

- (void)addAddress:(unsigned long long)arg0;
- (void)dealloc;
- (VMUCallTreeLeafNode *)init;
- (VMUCallTreeLeafNode *)initWithName:(NSString *)arg0 address:(unsigned long long)arg1 count:(unsigned int)arg2 numBytes:(unsigned long long)arg3;
- (void)getBrowserName:(NSString *)arg0;

@end
