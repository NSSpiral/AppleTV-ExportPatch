/* Runtime dump - MKMapAnnotationManager
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapAnnotationManager : MKAnnotationManager
{
    MKAnnotationView * _userLocationView;
    char _addedUserLocationAnnotation;
}

- (char)internalAnnotationAllowsCustomRepresentation:(NSDictionary *)arg0;
- (NSObject *)_defaultUserLocationAnnotationView:(NSObject *)arg0;
- (NSObject *)newDefaultAnnotationRepresentationForAnnotation:(NSObject *)arg0 reuseIdentifier:(NSString *)arg1;
- (void)configureDefaultAnnotationRepresentation:(NSDictionary *)arg0 forAnnotation:(NSObject *)arg1;
- (void)configureAnnotationRepresentation:(NSDictionary *)arg0 forAnnotation:(NSObject *)arg1;
- (void)cleanUpAnnotationRepresentationForRemoval:(id)arg0;
- (char)annotationIsInternal:(id)arg0;
- (NSObject *)newInternalAnnotationRepresentationForInternalAnnotation:(NSObject *)arg0;
- (void).cxx_destruct;

@end
