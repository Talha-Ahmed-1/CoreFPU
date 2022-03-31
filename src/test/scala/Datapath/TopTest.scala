package Datapath

import org.scalatest._
import chiseltest._
import chisel3._

import chiseltest.ChiselScalatestTester
import chiseltest.internal.VerilatorBackendAnnotation
import chiseltest.experimental.TestOptionBuilder._
import org.scalatest.FreeSpec

class TopTest extends FreeSpec with ChiselScalatestTester {
    
    "Top File Test" in {
    
        test(new TopFile).withAnnotations(Seq(VerilatorBackendAnnotation))  { c =>

        c.clock.step(800)

        // c.io.data_out.expect(0.U)
   
        }
    }
}