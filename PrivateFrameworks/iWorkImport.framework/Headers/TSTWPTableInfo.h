/* Runtime dump - TSTWPTableInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWPTableInfo : TSTTableInfo

- (TSTWPTableInfo *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct WPTableInfoArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct WPTableInfoArchive *)arg0 unarchiver:(struct WPTableInfoArchive)arg1;

@end
