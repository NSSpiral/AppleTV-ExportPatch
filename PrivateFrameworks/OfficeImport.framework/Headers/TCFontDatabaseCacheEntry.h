/* Runtime dump - TCFontDatabaseCacheEntry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCFontDatabaseCacheEntry : NSObject
{
    char _bold;
    char _italic;
    NSString * _name;
    int _fontClass;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) int fontClass;
@property (readonly, nonatomic) char bold;
@property (readonly, nonatomic) char italic;

+ (NSString *)newFontDatabaseCacheEntryWithName:(NSString *)arg0 fontClass:(int)arg1 bold:(char)arg2 italic:(char)arg3;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (char)bold;
- (char)italic;
- (TCFontDatabaseCacheEntry *)initWithName:(NSString *)arg0 fontClass:(int)arg1 bold:(char)arg2 italic:(char)arg3;
- (int)fontClass;

@end
