/* Runtime dump - PLFileSystemPersistenceAttributes
 * Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLFileSystemPersistenceAttributes : NSObject
{
    NSDictionary * _attributes;
}

- (void)dealloc;
- (NSString *)description;
- (NSString *)stringForKey:(NSString *)arg0;
- (char)getUInt16:(unsigned short *)arg0 forKey:(NSString *)arg1;
- (NSString *)UUIDStringForKey:(NSString *)arg0;
- (NSString *)dataForKey:(NSString *)arg0;
- (PLFileSystemPersistenceAttributes *)initWithAttributes:(NSDictionary *)arg0;

@end
