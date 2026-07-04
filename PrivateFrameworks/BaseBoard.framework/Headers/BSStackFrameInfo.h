/* Runtime dump - BSStackFrameInfo
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSStackFrameInfo : NSObject
{
    NSString * _realFunctionName;
    unsigned long _address;
    NSString * _functionName;
    NSString * _executableName;
    NSString * _className;
}

@property (readonly, nonatomic) unsigned long address;
@property (readonly, retain, nonatomic) NSString * functionName;
@property (readonly, retain, nonatomic) NSString * executableName;
@property (readonly, retain, nonatomic) NSString * className;

- (void)dealloc;
- (NSString *)description;
- (NSString *)className;
- (BSStackFrameInfo *)initWithReturnAddress:(unsigned long)arg0;
- (NSString *)functionName;
- (NSString *)executableName;
- (unsigned long)address;

@end
