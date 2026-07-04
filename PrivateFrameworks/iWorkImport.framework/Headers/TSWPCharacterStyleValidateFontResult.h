/* Runtime dump - TSWPCharacterStyleValidateFontResult
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCharacterStyleValidateFontResult : NSObject
{
    NSString * _mappedName;
    int _bold;
    int _italic;
    TSKWarning * _warning;
}

@property (retain, nonatomic) NSString * mappedName;
@property (retain, nonatomic) TSKWarning * warning;
@property (nonatomic) int bold;
@property (nonatomic) int italic;

- (NSString *)mappedName;
- (void)setMappedName:(NSString *)arg0;
- (void)dealloc;
- (int)bold;
- (int)italic;
- (void)setBold:(int)arg0;
- (void)setItalic:(int)arg0;
- (void)setWarning:(TSKWarning *)arg0;
- (TSKWarning *)warning;

@end
