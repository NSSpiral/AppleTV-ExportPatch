/* Runtime dump - ML3LibraryNotificationManager
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3LibraryNotificationManager : NSObject <MSVDistributedNotificationObserverDelegate>
{
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSString * _libraryPath;
    NSMutableArray * _notificationObservers;
    NSMutableOrderedSet * _queuedLocalNotifications;
    NSMutableOrderedSet * _queuedDistributedNotificationNames;
    ML3MusicLibrary * _library;
}

@property (readonly, weak, nonatomic) ML3MusicLibrary * library;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_destruct;
- (ML3MusicLibrary *)library;
- (ML3LibraryNotificationManager *)initWithLibrary:(ML3MusicLibrary *)arg0 distributedAndLocalNames:(id)arg1;
- (void)enqueueDistributedNotificationNamed:(id)arg0;
- (void)enqueueLocalNotificationNamed:(id)arg0;
- (void)_postEnqueuedLocalNotifications;
- (void)enqueueLocalNotification:(NSNotification *)arg0;
- (void)_postEnqueuedDistributedNotifications;
- (NSString *)_observerForDistributedName:(NSString *)arg0;
- (char)observerShouldForwardDistributedNotification:(NSNotification *)arg0;
- (void)addObserverForDistributedName:(NSString *)arg0 localName:(NSString *)arg1;
- (void)removeObserverWithDistributedName:(NSString *)arg0;
- (void)removeObserverWithLocalName:(NSString *)arg0;
- (NSString *)_observerForLocalName:(NSString *)arg0;

@end
