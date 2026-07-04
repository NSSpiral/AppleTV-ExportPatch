/* Runtime dump - ABCapabilitiesManager
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCapabilitiesManager : NSObject <IDSIDQueryControllerDelegate>
{
    char _isListeningToIDSServiceAvailability;
    char _isListeningToIDSQueryController;
    NSMutableDictionary * _destinationStatus;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ABCapabilitiesManager *)defaultCapabilitiesManager;
+ (void)_setDefaultCapabilitiesManager:(NSObject *)arg0;

- (char)hasCellularTelephonyCapability;
- (char)isConferencingAvailable;
- (NSNumber *)conferenceURLForPhoneNumber:(NSNumber *)arg0;
- (NSObject *)conferenceURLForDestinationID:(NSObject *)arg0;
- (char)hasSMSCapability;
- (char)isMadridConfigured;
- (char)isMMSConfigured;
- (void)_startListeningToIDSServiceAvailabilityIfNecessary;
- (char)isConferencingEverGonnaBeAvailable;
- (void)_startListeningToIDSIDQueryControllerIfNecessary;
- (char)_isAppAvailable:(id)arg0;
- (void)idStatusUpdatedForDestinations:(id)arg0 service:(NSObject *)arg1;
- (char)isSensitiveUIAllowed;
- (char)hasTelephonyCapability;
- (char)hasCellularTelephonyHardwareCapability;
- (char)hasCellularDataCapability;
- (char)hasVibratorCapability;
- (char)hasSiriCapability;
- (char)hasCameraCapability;
- (char)isEmailConfigured;
- (char)hasPreviouslyConferencedWithID:(int)arg0;
- (void)addIDSServiceAvailabilityListener:(id)arg0 selector:(SEL)arg1;
- (void)removeIDSServiceAvailabilityListener:(id)arg0;
- (char)hasAdditionalTextTones;
- (char)isTwitterServiceAvailable;
- (char)isWeiboServiceAvailable;
- (char)isFaceTimeAudioAvailable;
- (char)isPhoneAppAvailable;
- (char)isMailAppAvailable;
- (char)isMessagesAppAvailable;
- (char)isFaceTimeAppAvailable;
- (void)dealloc;

@end
