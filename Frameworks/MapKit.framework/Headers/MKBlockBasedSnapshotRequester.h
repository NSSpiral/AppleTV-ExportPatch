/* Runtime dump - MKBlockBasedSnapshotRequester
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKBlockBasedSnapshotRequester : NSObject <MKMapSnapshotCreatorRequester>
{
    id handler;
}

@property (copy, nonatomic) id handler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MKBlockBasedSnapshotRequester *)snapshotRequesterWitHandler:(id /* block */)arg0;

- (void)mapSnapshotCreator:(MKMapSnapshotCreator *)arg0 didCreateSnapshot:(UIImage *)arg1 attributionString:(NSString *)arg2 context:(NSObject *)arg3;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void).cxx_destruct;

@end
