/* Runtime dump - TUHardPauseController
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUHardPauseController : NSObject
{
    char _cachedValuesAreValid;
    unsigned short _state;
    unsigned short _cachedAppropriateState;
    NSString * _cachedDisplayString;
}

@property (readonly, nonatomic) NSString * displayString;
@property (nonatomic) unsigned short state;
@property (retain) NSString * cachedDisplayString;
@property char cachedValuesAreValid;
@property unsigned short cachedAppropriateState;

+ (TUHardPauseController *)sharedHardPauseController;

- (void)dealloc;
- (TUHardPauseController *)init;
- (unsigned short)state;
- (void)setState:(unsigned short)arg0;
- (NSString *)displayString;
- (unsigned short)appropriateState;
- (void)startListeningToHardPauseEvents;
- (void)stopListeningForHardPauseEvents;
- (void)modelStateChangedNotification:(NSNotification *)arg0;
- (void)setCachedValuesAreValid:(char)arg0;
- (char)supportsQueryingHardPauseDigitsLocally;
- (void)sendHardPauseDigitsLocally;
- (void)sendHardPauseDigitsRelayed;
- (void)resetCacheValidity;
- (void)sendHardPauseDigits;
- (void)updateCachedValuesIfNecessary;
- (NSString *)cachedDisplayString;
- (unsigned short)cachedAppropriateState;
- (char)cachedValuesAreValid;
- (void)setCachedAppropriateState:(unsigned short)arg0;
- (void)setCachedDisplayString:(NSString *)arg0;

@end
