/* Runtime dump - VMUSymbol
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUSymbol : NSObject
{
    NSString * _name;
    VMUSourceInfo * _sourceInfo;
}

- (void)dealloc;
- (NSString *)name;
- (VMUSymbol *)initWithSymbolicator:(struct _CSTypeRef)arg0 address:(unsigned long long)arg1;
- (NSString *)sourceInfoForAddress:(unsigned long long)arg0;

@end
