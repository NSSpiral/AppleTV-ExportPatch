/* Runtime dump - MKTrafficSupport
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTrafficSupport : NSObject

+ (MKTrafficSupport *)sharedTrafficSupport;

- (int)_convertType:(int)arg0;
- (void)setupTrafficIncidents;
- (NSObject *)localizedTitleForGEOIncidentType:(int)arg0 laneType:(int)arg1 laneCount:(unsigned int)arg2;
- (NSObject *)localizedTitleForIncidentType:(int)arg0 laneType:(int)arg1 laneCount:(unsigned int)arg2;
- (id)localizedSubtitleForStreet:(id)arg0 crossStreet:(NSString *)arg1;
- (struct CGImage *)imageForGEOIncidentType:(int)arg0 contentScale:(float)arg1;
- (struct CGImage *)imageForIncidentType:(int)arg0 contentScale:(float)arg1;

@end
