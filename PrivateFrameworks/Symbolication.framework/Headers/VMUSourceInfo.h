/* Runtime dump - VMUSourceInfo
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUSourceInfo : NSObject
{
    NSString * _path;
    NSString * _fileName;
    unsigned int _lineNumber;
}

- (NSString *)fileName;
- (unsigned int)lineNumber;
- (void)dealloc;
- (NSString *)path;
- (VMUSourceInfo *)initWithSymbolicator:(struct _CSTypeRef)arg0 address:(unsigned long long)arg1;

@end
