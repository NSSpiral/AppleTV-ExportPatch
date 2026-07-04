/* Runtime dump - MFObjectTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFObjectTable : NSObject
{
    NSMutableArray * m_objects;
}

- (void)dealloc;
- (int)size;
- (MFObjectTable *)init;
- (void)clear;
- (int)selectInto:(int)arg0 :(id)arg1;
- (int)putObject:(NSObject *)arg0 :(unsigned int)arg1;
- (NSObject *)getObject:(unsigned int)arg0;
- (unsigned int)insertPos;
- (int)deleteObject:(unsigned int)arg0;

@end
