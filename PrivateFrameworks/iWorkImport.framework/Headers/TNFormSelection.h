/* Runtime dump - TNFormSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNFormSelection : TSKSelection
{
    unsigned char _fieldIndex;
    unsigned short _recordIndex;
}

@property (readonly, nonatomic) unsigned short recordIndex;
@property (readonly, nonatomic) unsigned char fieldIndex;

+ (Class)archivedSelectionClass;
+ (NSObject *)selectionForRecordIndex:(unsigned short)arg0 fieldIndex:(unsigned char)arg1;
+ (UIWebSelection *)selection;

- (TNFormSelection *)initWithRecordIndex:(unsigned short)arg0 fieldIndex:(unsigned char)arg1;
- (unsigned short)recordIndex;
- (unsigned char)fieldIndex;
- (char)isEqual:(NSObject *)arg0;
- (TNFormSelection *)copyWithZone:(struct _NSZone *)arg0;

@end
