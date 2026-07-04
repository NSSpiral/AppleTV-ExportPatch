/* Runtime dump - AVInternalDeviceList
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVInternalDeviceList : NSObject
{
    id changeListener;
    NSMutableArray * deviceList;
    struct _opaque_pthread_mutex_t listLock;
}

@property (copy, nonatomic) id changeListener;

+ (NSArray *)newDeviceList;
+ (AVInternalDeviceList *)defaultDeviceOfType:(unsigned long)arg0;

- (void)dealloc;
- (AVInternalDeviceList *)init;
- (void)cleanup;
- (NSMutableArray *)deviceList;
- (void)setChangeListener:(id)arg0;
- (id)changeListener;

@end
