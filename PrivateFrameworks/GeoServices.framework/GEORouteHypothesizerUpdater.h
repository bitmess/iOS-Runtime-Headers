/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class <GEORouteHypothesizerUpdaterDelegate>, GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequestFeedback, GEODirectionsRouteRequest, GEOLocation, GEOMapRegion, GEORouteAttributes, GEORouteMatch, NSDate, NSLock, NSMutableArray;

@interface GEORouteHypothesizerUpdater : NSObject {
    GEOMapRegion *_arrivalMapRegion;
    GEODirectionsRouteRequest *_currentRequest;
    <GEORouteHypothesizerUpdaterDelegate> *_delegate;
    GEOComposedWaypoint *_destination;
    GEODirectionsRequestFeedback *_feedback;
    BOOL _hasArrived;
    BOOL _isTraveling;
    NSDate *_lastRerouteDate;
    unsigned int _numThrottledReroutes;
    GEOLocation *_originLocation;
    NSLock *_requestLock;
    NSMutableArray *_rerouteEntries;
    GEOComposedRoute *_route;
    GEORouteAttributes *_routeAttributes;
    GEORouteMatch *_routeMatch;
    double _score;
    BOOL _shouldThrottleReroutes;
    GEOComposedWaypoint *_source;
}

@property <GEORouteHypothesizerUpdaterDelegate> * delegate;
@property(retain) GEODirectionsRequestFeedback * feedback;
@property(readonly) BOOL hasArrived;
@property(readonly) BOOL isTraveling;
@property(readonly) GEOComposedRoute * route;
@property(readonly) GEORouteMatch * routeMatch;
@property(readonly) double score;

- (BOOL)_checkForArrival:(id)arg1 routeMatch:(id)arg2;
- (void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2;
- (id)_routeMatchForLocation:(id)arg1;
- (void)_updateScoreForLocation:(id)arg1;
- (void)cancelCurrentRequest;
- (void)dealloc;
- (id)delegate;
- (id)feedback;
- (BOOL)hasArrived;
- (id)initWithSource:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (BOOL)isTraveling;
- (id)route;
- (id)routeMatch;
- (double)score;
- (void)setDelegate:(id)arg1;
- (void)setFeedback:(id)arg1;
- (void)startUpdatingFromLocation:(id)arg1 existingRoute:(id)arg2 usualRouteData:(id)arg3;
- (void)updateForLocation:(id)arg1;

@end