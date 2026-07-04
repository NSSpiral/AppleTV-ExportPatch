/* Runtime dump - NSDirInfo
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDirInfo : NSMutableDictionary
{
    NSMutableDictionary * dict;
}

- (unsigned int)writePath:(NSString *)arg0 docInfo:(NSDocInfo *)arg1 errorHandler:(SSErrorHandler *)arg2 remapContents:(char)arg3 hardLinkPath:(NSString *)arg4;
- (NSData *)serializeToData;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (NSDirInfo *)init;
- (NSDirInfo *)initWithDictionary:(NSDictionary *)arg0;
- (void)removeObjectForKey:(NSString *)arg0;
- (NSDirInfo *)initWithCapacity:(unsigned int)arg0;
- (NSDirInfo *)initWithContentsOfFile:(NSString *)arg0;
- (NSDirInfo *)initWithObjects:(id *)arg0 forKeys:(NSArray *)arg1 count:(id *)arg2;
- (NSEnumerator *)keyEnumerator;
- (NSDirInfo *)initWithDictionary:(NSDictionary *)arg0 copyItems:(char)arg1;

@end
