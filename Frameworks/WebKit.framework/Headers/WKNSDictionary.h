/* Runtime dump - WKNSDictionary
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNSDictionary : NSDictionary <WKObject>
{
    struct ObjectStorage<WebKit::ImmutableDictionary> _dictionary;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (WKNSDictionary *)copyWithZone:(struct _NSZone *)arg0;
- (WKNSDictionary *)initWithObjects:(id *)arg0 forKeys:(NSArray *)arg1 count:(id *)arg2;
- (void).cxx_construct;
- (NSEnumerator *)keyEnumerator;
- (struct Object *)_apiObject;

@end
