/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, NSString;

@interface MKPolygon : MKMultiPoint <MKOverlay> {
    struct { 
        double latitude; 
        double longitude; 
    } _centroid;
    NSArray *_interiorPolygons;
    bool_isDefinitelyConvex;
}

@property bool _isDefinitelyConvex;
@property(readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) NSArray * interiorPolygons;
@property(copy,readonly) NSString * subtitle;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * title;

+ (id)_polygonWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)polygonEnclosingMapPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithCoordinates:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithCoordinates:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)_isDefinitelyConvex;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (struct { double x1; double x2; })coordinate;
- (id)interiorPolygons;
- (bool)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_isDefinitelyConvex:(bool)arg1;

@end