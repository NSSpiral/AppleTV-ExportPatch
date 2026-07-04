/* Runtime dump - SALocalSearchRoute
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchRoute : AceObject <SABackgroundContextObject>

@property (copy, nonatomic) NSData * routeAsZilchBinary;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)routeWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (MPAVRoute *)route;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSData *)routeAsZilchBinary;
- (void)setRouteAsZilchBinary:(NSData *)arg0;

@end
