/* Runtime dump - EDHyperlink
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDHyperlink : NSObject
{
    EDString * mPath;
    EDString * mDosPath;
    EDString * mDescriptionText;
    EDString * mTextMark;
    EDString * mToolTip;
    EDReference * mReference;
    int mType;
}

+ (EDHyperlink *)hyperlink;

- (void)dealloc;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)path;
- (void)setPath:(NSString *)arg0;
- (void)setDescriptionText:(NSString *)arg0;
- (NSString *)descriptionText;
- (void)setDosPath:(NSString *)arg0;
- (void)setTextMark:(id)arg0;
- (void)setReference:(NSObject *)arg0;
- (void)setToolTip:(NSString *)arg0;
- (NSString *)dosPath;
- (id)textMark;
- (NSString *)toolTip;
- (struct ?)reference;

@end
