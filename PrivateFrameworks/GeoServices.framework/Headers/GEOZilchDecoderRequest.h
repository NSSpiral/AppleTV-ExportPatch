/* Runtime dump - GEOZilchDecoderRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOZilchDecoderRequest : GEOMapRequest
{
    struct unique_ptr<geo::ZilchMapModel, std::__1::default_delete<geo::ZilchMapModel> > _mapModel;
    GEOZilchDecoder * _decoder;
    struct shared_ptr<zilch::Message> _message;
    id _pathHandler;
    id _errorHandler;
    NSError * _firstTileLoadingError;
    NSObject<OS_dispatch_semaphore> * _finishedSemaphore;
}

@property (copy) id pathHandler;
@property (copy) id errorHandler;

- (void)cancel;
- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setErrorHandler:(id /* block */)arg0;
- (id /* block */)errorHandler;
- (GEOZilchDecoderRequest *)initWithDecoder:(GEOZilchDecoder *)arg0 message:(struct shared_ptr<zilch::Message>)arg1;
- (void)decodeWithPathHandler:(id /* block */)arg0 errorHandler:(/* block */ id)arg1;
- (id /* block */)pathHandler;
- (void)setPathHandler:(id /* block */)arg0;
- (void)_finishedDecodingWithPath:(struct Path<std::__1::shared_ptr<geo::MapEdge> >)arg0;

@end
