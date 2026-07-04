/* Runtime dump - KNClassicStylesheetRecord
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNClassicStylesheetRecord : TSPObject
{
    NSDictionary * mIdentifierToStyleMap;
}

@property (retain, nonatomic) NSDictionary * identifierToStyleMap;

- (KNClassicStylesheetRecord *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ClassicStylesheetRecordArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct ClassicStylesheetRecordArchive *)arg0 unarchiver:(struct ClassicStylesheetRecordArchive)arg1;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (NSDictionary *)identifierToStyleMap;
- (void)setIdentifierToStyleMap:(NSDictionary *)arg0;
- (void)dealloc;

@end
