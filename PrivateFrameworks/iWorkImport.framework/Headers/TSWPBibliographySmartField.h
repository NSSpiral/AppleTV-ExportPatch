/* Runtime dump - TSWPBibliographySmartField
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPBibliographySmartField : TSWPSmartField <TSWPCitationRecordHosting>
{
    char _isLocalizable;
    NSArray * _citationRecords;
}

@property (copy, nonatomic) NSArray * citationRecords;
@property (nonatomic) char isLocalizable;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)isValidBibliographyField:(id)arg0;

- (TSWPBibliographySmartField *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (int)smartFieldKind;
- (char)allowsPasteAsSmartField;
- (char)isLocalizable;
- (void)setIsLocalizable:(char)arg0;
- (void)setCitationRecords:(NSArray *)arg0;
- (NSArray *)citationRecords;
- (NSArray *)citationSmartFields;
- (void)dealloc;

@end
