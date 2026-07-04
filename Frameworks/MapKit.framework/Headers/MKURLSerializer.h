/* Runtime dump - MKURLSerializer
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKURLSerializer : NSObject

- (NSObject *)urlForDirectionsFromMapItem:(NSObject *)arg0 toMapItem:(NSObject *)arg1 transportType:(unsigned int)arg2 options:(NSDictionary *)arg3;
- (NSArray *)urlForOpeningMapItems:(NSArray *)arg0 options:(NSDictionary *)arg1;
- (NSArray *)_urlForOpeningMapItems:(NSArray *)arg0 options:(NSDictionary *)arg1 precision:(char)arg2;
- (NSObject *)_urlForDirectionsFromMapItem:(NSObject *)arg0 toMapItem:(NSObject *)arg1 transportType:(unsigned int)arg2 options:(NSDictionary *)arg3 precision:(char)arg4;
- (NSObject *)urlToPresentDirectionsFromMapItem:(NSObject *)arg0 toMapItem:(NSObject *)arg1 transportType:(unsigned int)arg2 options:(NSDictionary *)arg3;
- (NSURL *)mapItemsFromUrl:(NSURL *)arg0 options:(id *)arg1;
- (NSArray *)urlToPresentMapItems:(NSArray *)arg0 options:(NSDictionary *)arg1;

@end
