/* Runtime dump - WDAnnotationData
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDAnnotationData : NSObject
{
    WDText * mText;
    NSDate * mDate;
    NSString * mOwner;
}

- (void)dealloc;
- (NSDate *)date;
- (NSString *)text;
- (void)setDate:(NSDate *)arg0;
- (WDAnnotationData *)initWithText:(NSString *)arg0;
- (NSString *)owner;
- (void)setOwner:(NSObject *)arg0;

@end
