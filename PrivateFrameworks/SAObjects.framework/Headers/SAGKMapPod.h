/* Runtime dump - SAGKMapPod
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKMapPod : SAGKPodView

@property (retain, nonatomic) SALocation * location;
@property (retain, nonatomic) SAUIAppPunchOut * punchOut;
@property (copy, nonatomic) NSNumber * showButton;
@property (copy, nonatomic) NSNumber * zoomLevel;

+ (SAGKMapPod *)mapPod;
+ (NSDictionary *)mapPodWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SALocation *)location;
- (void)setLocation:(SALocation *)arg0;
- (NSString *)encodedClassName;
- (SAUIAppPunchOut *)punchOut;
- (void)setPunchOut:(SAUIAppPunchOut *)arg0;
- (NSNumber *)showButton;
- (void)setShowButton:(NSNumber *)arg0;
- (void)setZoomLevel:(NSNumber *)arg0;
- (NSNumber *)zoomLevel;

@end
