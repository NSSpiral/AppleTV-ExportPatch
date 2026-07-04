/* Runtime dump - TSCHReferenceLineNonStyleItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHReferenceLineNonStyleItem : NSObject
{
    TSCHReferenceLineNonStyle * mNonStyle;
    NSUUID * mUUID;
}

@property (retain, nonatomic) TSCHReferenceLineNonStyle * nonStyle;
@property (readonly, nonatomic) NSUUID * uuid;

- (void)saveToArchiver:(NSObject *)arg0 message:(struct ChartReferenceLineNonStyleItem *)arg1;
- (TSCHReferenceLineNonStyle *)nonStyle;
- (TSCHReferenceLineNonStyleItem *)initWithNonStyle:(TSCHReferenceLineNonStyle *)arg0 uuid:(NSUUID *)arg1;
- (TSCHReferenceLineNonStyleItem *)initFromUnarchiver:(NSObject *)arg0 message:(struct ChartReferenceLineNonStyleItem *)arg1;
- (void)setNonStyle:(TSCHReferenceLineNonStyle *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSUUID *)uuid;

@end
