/* Runtime dump - TUIDSUtilities
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUIDSUtilities : NSObject <IDSIDQueryControllerDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (NSObject *)idsServiceForType:(unsigned int)arg0;
+ (char)_anyStatusInResultDictionary:(NSDictionary *)arg0 equalsIDStatus:(int)arg1;
+ (NSObject *)_IDSFormattedDestinationsForPerson:(NSObject *)arg0;
+ (char)_availabilityForDestinations:(id)arg0 serviceType:(unsigned int)arg1;
+ (char)_refreshAvailabilityForDestinations:(id)arg0 serviceType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
+ (NSObject *)personForABRecordID:(int)arg0;
+ (char)_availabilityForPerson:(NSObject *)arg0 serviceType:(unsigned int)arg1;
+ (char)_refreshAvailabilityForPerson:(NSObject *)arg0 serviceType:(unsigned int)arg1;
+ (char)isService:(unsigned int)arg0 availableForDestinations:(id)arg1;
+ (char)isService:(unsigned int)arg0 availableForABRecordID:(int)arg1;
+ (char)refreshAvailabilityForABRecordID:(int)arg0 serviceType:(unsigned int)arg1;

@end
