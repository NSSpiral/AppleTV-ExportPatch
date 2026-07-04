/* Runtime dump - VKRasterMapTileServerCallback
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapTileServerCallback : NSObject
{
    VKRasterMapTileRequest * request;
    id handler;
    double startTimestamp;
}

@property (retain, nonatomic) VKRasterMapTileRequest * request;
@property (copy, nonatomic) id handler;
@property (nonatomic) double startTimestamp;

- (void)dealloc;
- (NSString *)description;
- (VKRasterMapTileRequest *)request;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void)setRequest:(VKRasterMapTileRequest *)arg0;
- (double)startTimestamp;
- (void)setStartTimestamp:(double)arg0;

@end
