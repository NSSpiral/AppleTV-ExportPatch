/* Runtime dump - OCXRelationships
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXRelationships : NSObject
{
    NSString * mPath;
    NSMutableArray * mRelationships;
    NSMutableDictionary * mRelationshipMap;
    unsigned int mNextId;
}

- (void)dealloc;
- (NSString *)path;
- (char)isEmpty;
- (OCXRelationships *)initWithPath:(NSString *)arg0;
- (NSString *)addRelationshipForKey:(NSString *)arg0 type:(NSObject *)arg1 target:(NSObject *)arg2 external:(char)arg3;
- (NSString *)addRelationshipForKey:(NSString *)arg0 type:(NSObject *)arg1 target:(NSObject *)arg2;
- (NSString *)idForKey:(NSString *)arg0;
- (void)writeRelationshipsToFilename:(NSString *)arg0 stream:(NSObject *)arg1;

@end
