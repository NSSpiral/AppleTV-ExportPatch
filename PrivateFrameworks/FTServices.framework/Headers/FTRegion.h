/* Runtime dump - FTRegion
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTRegion : NSObject
{
    NSDictionary * _dictionary;
    NSArray * _subRegions;
    FTRegion * _parentRegion;
}

@property (readonly) NSString * isoCode;
@property (readonly) NSString * label;
@property (readonly) NSString * regionID;
@property (readonly) NSString * basePhoneNumber;
@property (readonly) FTRegion * parentRegion;
@property (readonly) NSArray * subRegions;
@property (retain) NSDictionary * _dictionary;
@property (retain) FTRegion * _parentRegion;

- (void)dealloc;
- (NSString *)description;
- (NSString *)label;
- (NSDictionary *)_initWithDictionary:(NSDictionary *)arg0;
- (NSString *)regionID;
- (void)_setParentRegion:(NSObject *)arg0;
- (NSArray *)subRegions;
- (NSString *)isoCode;
- (NSString *)basePhoneNumber;
- (FTRegion *)parentRegion;
- (NSObject *)regionWithID:(int)arg0;
- (NSDictionary *)_dictionary;
- (void)set_dictionary:(NSDictionary *)arg0;
- (FTRegion *)_parentRegion;
- (void)set_parentRegion:(FTRegion *)arg0;

@end
