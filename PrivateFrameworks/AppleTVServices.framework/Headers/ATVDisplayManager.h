/* Runtime dump - ATVDisplayManager
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDisplayManager : NSObject
{
    CADisplay * _display;
    ATVDisplayMode * _currentDisplayMode;
    NSMutableArray * _nonVirtualModes;
    NSMutableArray * _virtualModes;
    unsigned int _updateFlags;
    NSTimer * _modeChangeFailureRetryTimer;
    unsigned int _modeChangeFailureCount;
    ATVDisplayMode * _preferredDisplayMode;
}

@property (readonly, nonatomic) ATVDisplayMode * currentDisplayMode;
@property (nonatomic) ATVDisplayMode * preferredDisplayMode;
@property (nonatomic) unsigned int colorMode;
@property (readonly, copy, nonatomic) NSArray * availableDisplayModes;

+ (ATVDisplayManager *)sharedInstance;
+ (void)setupDisplayManagement;
+ (char)automaticallyNotifiesObserversOfCurrentDisplayMode;

- (ATVDisplayMode *)preferredDisplayMode;
- (void)setPreferredDisplayMode:(ATVDisplayMode *)arg0;
- (void).cxx_destruct;
- (void)_setDisplay:(NSObject *)arg0;
- (void)_handleHardwareDisplayModeChanged;
- (void)_handleAvailableDisplayModesChanged;
- (unsigned int)colorMode;
- (void)setColorMode:(unsigned int)arg0;
- (id)HardwareDisplayModeBinding;
- (void)updateBoundHardwareDisplayMode;
- (void)setNeedsUpdateForAspect:(unsigned int)arg0;
- (void)_recordDisplaySettingsForAggd;
- (id)AvailableHardwareDisplayModesBinding;
- (void)updateBoundAvailableHardwareDisplayModes;
- (void)_computeAllModesForDisplay;
- (void)_setDisplayToDefaultMode;
- (char)supportsDisplayMode:(id)arg0;
- (NSObject *)_uniqueDisplayID;
- (char)_setCurrentDisplayMode:(id)arg0;
- (void)_clearUserPreferredModeForCurrentDisplay;
- (void)_setDisplayToDefaultColorMode;
- (void)_systemAppSetDisplayToDefaultMode;
- (NSObject *)_userPreferredModeForCurrentDisplay;
- (NSArray *)availableDisplayModes;
- (void)bindHardwareDisplayModeBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)bindAvailableHardwareDisplayModesBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (ATVDisplayMode *)currentDisplayMode;

@end
