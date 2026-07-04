/* Runtime dump - TSWPLineSpacing
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPLineSpacing : NSObject <NSCopying>
{
    int _mode;
    float _amount;
    float _baselineRule;
}

+ (TSWPLineSpacing *)lineSpacing;

- (void)saveToArchive:(struct LineSpacingArchive *)arg0 archiver:(NSObject *)arg1;
- (TSWPLineSpacing *)initWithArchive:(struct LineSpacingArchive *)arg0 unarchiver:(struct LineSpacingArchive)arg1;
- (float)baselineRule;
- (TSWPLineSpacing *)initWithMode:(int)arg0 amount:(float)arg1 baselineRule:(float)arg2;
- (TSWPLineSpacing *)initWithMode:(int)arg0 amount:(float)arg1;
- (TSWPLineSpacing *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (TSWPLineSpacing *)copyWithZone:(struct _NSZone *)arg0;
- (int)mode;
- (float)amount;

@end
