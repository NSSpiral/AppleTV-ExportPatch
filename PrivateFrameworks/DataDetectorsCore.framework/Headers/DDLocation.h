/* Runtime dump - DDLocation
 * Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDLocation : NSObject <NSCoding>
{
    NSString * _fileName;
    int _firstLine;
    int _firstColumn;
    int _lastLine;
    int _lastColumn;
}

@property (readonly, copy) NSString * fileName;
@property (readonly) int firstLine;
@property (readonly) int firstColumn;
@property (readonly) int lastLine;
@property (readonly) int lastColumn;

- (NSString *)fileName;
- (void)dealloc;
- (DDLocation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (struct __DDExpressionPosition)position;
- (DDLocation *)initWithFileName:(NSString *)arg0 firstLine:(int)arg1 firstColumn:(int)arg2 lastLine:(int)arg3 lastColumn:(int)arg4;
- (int)firstLine;
- (int)lastLine;
- (DDLocation *)initWithFileName:(NSString *)arg0 position:(struct __DDExpressionPosition)arg1;
- (int)lastColumn;
- (int)firstColumn;

@end
