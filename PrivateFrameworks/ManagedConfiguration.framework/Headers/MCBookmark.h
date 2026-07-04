/* Runtime dump - MCBookmark
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCBookmark : NSObject <NSCopying>
{
    NSURL * _URL;
    NSString * _title;
    NSString * _path;
}

@property (retain, nonatomic) NSURL * URL;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * path;

- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)title;
- (NSString *)path;
- (MCBookmark *)copyWithZone:(struct _NSZone *)arg0;
- (NSURL *)URL;
- (void)setPath:(NSString *)arg0;
- (void)setURL:(NSString *)arg0;
- (void).cxx_destruct;
- (MCBookmark *)initWithSerializableDictionary:(NSDictionary *)arg0;
- (NSDictionary *)serializableDictionary;

@end
