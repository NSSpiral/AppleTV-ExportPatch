/* Runtime dump - DDCompilationNote
 * Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDCompilationNote : DDLocation
{
    NSString * _message;
    int _level;
}

@property (readonly) NSString * message;
@property (readonly) int level;

+ (NSObject *)noteAtLocation:(NSObject *)arg0 ofLevel:(int)arg1 withFormat:(NSString *)arg2;

- (void)dealloc;
- (int)level;
- (NSString *)message;
- (DDCompilationNote *)initWithLocation:(NSObject *)arg0 message:(NSString *)arg1 level:(int)arg2;
- (DDCompilationNote *)initWithFileName:(NSString *)arg0 position:(struct __DDExpressionPosition)arg1 message:(NSString *)arg2 level:(int)arg3;

@end
